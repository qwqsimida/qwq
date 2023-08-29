//
//  main.cpp
//  基于多态的职工管理系统
//
//  Created by qwq on 8/29/23.
//

#include <iostream>
using namespace std;
#include <string>
#include "WorkManager.hpp"
#include "worker.hpp"
#include "employee.hpp"
#include "manager.hpp"
#include "boss.hpp"

int main(){

    //测试代码
    Worker * worker = NULL;
    worker = new Employee(1,"张三",1);
    worker->showInfo();
    
    worker = new Manager(2,"李四",2);
    worker->showInfo();
    
    worker = new Boss(3,"王五",3);
    worker->showInfo();
    
    WorkManager wm;
    
    int choice = 0;
    
    while(true)
    {
        wm.showMenu();
        cout<<"请选择"<<endl;
        cin>>choice;
        
        switch (choice) {
            case 0:  //退出系统
                wm.ExitSystem();
                break;
            case 1:  //添加职工
                
                break;
            case 2:  //显示职工
                
                break;
            case 3:  //删除职工
                
                break;
            case 4:  //修改职工
                
                break;
            case 5:  //查找职工
                
                break;
            case 6:  //排序职工
                
                break;
            case 7:  //清空文件
                
                break;
            default:
                system("cls");
                break;
        }
    }
    
    return 0;
}
