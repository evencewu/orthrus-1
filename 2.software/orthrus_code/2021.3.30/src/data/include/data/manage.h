#ifndef MANAGE
#define MANAGE 

bool check_file_test(char const *filePath)
{
    // 用 ifstream 来判断文件是否存在
    ifstream testFile(filePath);
    if(!testFile)
    {
        cout << "file not exit" << endl;
        return false;
    }
    else
    {
        cout << "file exit" << endl;
        return true;
    }
    return false;
}

void read(int argc, char** argv)
{
    check_file_test("./test_file.txt");
    
}

void write(int argc, char** argv)
{
    char fileName[] = "./test_file.txt";
    check_file_test(fileName);
    return 0;
}
