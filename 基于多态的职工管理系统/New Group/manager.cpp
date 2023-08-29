//
//  manager.cpp
//  基于多态的职工管理系统
//
//  Created by qwq on 8/29/23.
//

#include "manager.hpp"

//构造函数
Manager::Manager(int id,string name,int dId){
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
};

//显示个人信息
void Manager::showInfo()
{
    cout<<"职工编号："<<this->m_Id
        <<"\t职工姓名："<<this->m_Name
        <<"\t岗位："<<this->getDeptName()
        <<"岗位职责：完成老板交给的任务并下发给员工"
        <<endl;
}

//获取岗位名称
string Manager::getDeptName()
{
    return string ("经理");
}
