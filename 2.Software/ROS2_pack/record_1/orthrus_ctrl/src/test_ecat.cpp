#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

#include "soem_ros2/soem.h"

char IOmap[4096];
// 使从站进入op状态
void slavetop(int i)
{
        ec_slave[i].state = EC_STATE_OPERATIONAL;
        ec_send_processdata();
        ec_receive_processdata(EC_TIMEOUTRET);
        ec_writestate(0);

}
void simpletest(char *ifname)
{
        int i,k = 1000,j=0;
        if(ec_init(ifname))
        {   
                printf("start ethernet at %s\n",ifname);
                if ( ec_config_init(FALSE) > 0 ) 
                {   
                        printf("found %d slave on the bus\n",ec_slavecount);
                        ec_config_map(&IOmap);
                        for(i=0;i<ec_slavecount;i++)
                        {   
                                printf("slave%d to op\n", i); 
                                slavetop(i);
                        }   
                        if(ec_slave[j].state == EC_STATE_OPERATIONAL)
                        {   
                                while(k--)//控制运行周期数
                                {   
                                        ec_slave[0].outputs[0x0000] = 0x0F;
                                        ec_send_processdata();
                                        ec_receive_processdata(EC_TIMEOUTRET);
                                        printf("%d \n", k); 
                                        usleep(5000);//发送周期
                                }   
                        }   
                        else
                        {
                                slavetop(j);
                                printf("slave again to op\n");
                        }
                }
                else
                {
                        printf("no slave on the bus\n");
                }
        }
        else
        {
                printf("no ethernet card\n");
        }
}
int main(int argc, char *argv[])
{
        printf("SOEM (Simple Open EtherCAT Master)\nSimple test\n");

        if (argc > 1)
        {
                simpletest(argv[1]);
        }
        else
        {
                printf("Usage: simple_test ifname1\nifname = eth0 for example\n");
        }

        printf("End program\n");
        return (0);
}
