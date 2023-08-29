//
//  boss.cpp
//  基于多态的职工管理系统
//
//  Created by qwq on 8/29/23.
//

#include "boss.hpp"

//构造函数
Boss::Boss(int id,string name,int dId){
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
};

//显示个人信息
void Boss::showInfo()
{
    cout<<"职工编号："<<this->m_Id
        <<"\t职工姓名："<<this->m_Name
        <<"\t岗位："<<this->getDeptName()
        <<"岗位职责：管理公司所有事务"
        <<endl;
}

//获取岗位名称
string Boss::getDeptName()
{
    return string ("总裁");
}
