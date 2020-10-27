int A = 5;
int B = 6;
int C = 9;


// 初始化
void setup() {
    // 初始化串口，9600 波特率
    Serial.begin(9600);
    // 把按键引脚设置为输入
    pinMode(A, INPUT);
    pinMode(B, INPUT);
    pinMode(C, INPUT);
    
}

// 主循环
void loop() {
    // 读取输入引脚的值
    int A_ = digitalRead(A);
    int B_ = digitalRead(B);
    int C_ = digitalRead(C);
    // 打印结果到串口
    Serial.println(A_);
    Serial.println(B_);
    Serial.println(C_);
    // 延迟大小决定循环读取的时间间隔
    delay(10);
}
