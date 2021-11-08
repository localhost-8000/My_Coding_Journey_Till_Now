#include<iostream>

using namespace std;

int main(){
    //string name="Rahul Tiwari";
    //cout<<name.length()<<endl;
    //cout<<name.find("hul",0)<<endl;
    //cout<<name.substr(2,6)<<endl;
    //name[2]='j';
    //cout<<name<<endl;

    //Some methods of initialisation.....of string
    string name("Rahul Tiwari");
    cout<<name<<endl;
    //By another string......
    string name1(name);
    cout<<name1<<endl;
    //By character and its occurence....
    string name2(6,'u');
    cout<<name2<<endl;
    //By part of another string........
    string name3(name,6,6);            //initial point,length
    cout<<name3<<endl;
    //iteration mmethod.....
    string name4(name.begin(),name.begin()+8);
    cout<<name4<<endl;

    //name1.clear();
    //cout<<name1<<endl;

    name.append(" is a good ");
    cout<<name<<endl;
    name+="boy.";
    cout<<name<<endl;

    cout<<name.front()<<endl;
    cout<<name.back()<<endl;

    name.append(name2,0,3);
    cout<<name<<endl;

    //  substr(a, b) function returns a substring of b length
    //  starting from index a
    //cout << str6.substr(7, 3) << endl;

    //  if second argument is not passed, string till end is
    // taken as substring
    //cout << str6.substr(7) << endl;

    //  erase(a, b) deletes b characters at index a
    //name.erase(7, 4);
    //cout << name << endl;

    //  iterator version of erase
    //name.erase(name.begin() + 5, name.end() - 3);
    //cout << name << endl;

    //  constant npos whose value is -1
    cout<<name<<endl<<name1<<endl;
    if (name.find(name1) != string::npos)
        cout << "name1 found in name at " << name.find(name1)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;


    /*string returnFloatingPart(string str){
        int pos = str.find(".");
        if (pos == string::npos)
            return "";
        else
            return str.substr(pos + 1);
    } */



}
