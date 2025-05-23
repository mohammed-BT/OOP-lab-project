#include <iostream>
using namespace std;

class library {
public:
    class book {
    private:
        int price;
        string name;
        int ip;
        const string password = "b123";
    public:
        void setbook_d(int p, string n, int i) {
            price = p;
            name = n;
            ip = i;
        }
        int getprice_b() { return price; }
        int getip_b() { return ip; }
        string getname_b() { return name; }
        string getpassword_b() { return password; }

        int id;
        string title;
        string author;

        void inputBook() {
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
        }

        void displayBook() {
            cout << "\nBook ID: " << id << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
        }
    };

    class employee {
    private:
        string name;
        int ip;
        const string password = "e123";
    public:
        void setemployee_d(string n, int i) {
            name = n;
            ip = i;
        }
        int getip_e() { return ip; }
        string getname_e() { return name; }
        string getpassword_e() { return password; }
    };

    class customers {
    private:
        string name;
        int ip;
        const string password = "c123";
    public:
        void setcustomers_d(string n, int i) {
            name = n;
            ip = i;
        }
        int getip_c() { return ip; }
        string getname_c() { return name; }
        string getpassword_c() { return password; }
    };

    class transactions {
    private:
        int day;
        int tran1 = 1;
        int tran2 = 2;
        const string password = "t123";
    public:
        void settran_d(int d) {
            day = d;
        }
        int getday_t() { return day; }
        int gettran1_t() { return tran1; }
        int gettran2_t() { return tran2; }
        string getpassword_t() { return password; }
    };

virtual    void showdata() {


    book bp ,b1 ,b2, b;
       b1.setbook_d(10 ,"book1" , 1);
       b2.setbook_d(25 ,"book2" , 2);
    customers cp ,c1 ,c2;
       c1.setcustomers_d("mohammed", 1);
       c2.setcustomers_d("ahmed", 2);
    employee ep ,e1 ,e2;
       e1.setemployee_d("yaman", 1);
       e2.setemployee_d("kaled", 2);
    transactions tp ,t1 ,t2;
       t1.settran_d(7);
       t2.settran_d(0);

    while (true) {
        cout<<"enter password or enter -1 to exit: ";
        string pw;
        cin>>pw;
            if (bp.getpassword_b()==pw) {
                cout << "book:" << endl;
                cout <<"id: "<<b1.getip_b()<<" name: "<<b1.getname_b()<<" price: "<<b1.getprice_b()<<endl;
                cout <<"id: "<<b2.getip_b()<<" name: "<<b2.getname_b()<<" price: "<<b2.getprice_b()<<endl;
                    b.inputBook();
                    b.displayBook();
    }
            if (cp.getpassword_c()==pw) {
                cout << "customers:" << endl;
                cout <<"id: "<<c1.getip_c()<<" name: "<<c1.getname_c()<<endl;
                cout <<"id: "<<c2.getip_c()<<" name: "<<c2.getname_c()<<endl;
    }
            if (ep.getpassword_e()==pw) {
                cout << "employee:" << endl;
                cout <<"id: "<<e1.getip_e()<<" name: "<<e1.getname_e()<<endl;
                cout <<"id: "<<e2.getip_e()<<" name: "<<e2.getname_e()<<endl;
    }

           if (tp.getpassword_t()==pw) {
                cout << "transactions:" << endl;
                cout <<"to by enter 1 to borrow enter 2: ";
                int t;
                cin>>t;
                    if (t==1) {
                        cout<<"thank you for buy \n";
                    }
                    if (t==2) {
                        cout<<"thank you for borrow \n";
                        cout<<"day :"<<t1.getday_t()<<endl;
                    }
                    if (t!=1 && t!=2) {
                        cout <<"you enter wrong input \n";
                    }
    }
            if (pw=="-1") {
                break;
            }
}
    }

        library(){
        cout<<"library_con"<<endl;
        }
        ~library(){
        cout<<"library_des"<<endl;
        }
};


class review : public library {
private:
    string name;
    string note;
    int rate;

public:
    void setData(string n, string nt, int r) {
        name = n;
        note = nt;
        rate = r;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Note: " << note << endl;
        cout << "Rate: " << rate << "/5" << endl;
    }

    void display() {
        showData();
    }
};

class notification : public library {
private:
    string message;

public:
    void setNotification(string msg) {
        message = msg;
    }

    void showNotification() {
        cout << " Notification: " << message << endl;
    }
};

class childL : public library,public notification,public review {
    private:
        string location;
        float worktime;

    public:
        childL(string l, float wt){
            location=l;
            worktime=wt;
            cout<<"child_cons\n"<<"library locatin: "<<location<<"  library work for "<<worktime<<" hours\n";
            }
        childL(string l){
            location=l;
            cout<<"child_cons\n"<<"library locatin: "<<location<<endl;
            }
        ~childL(){
        cout<<"childL_des"<<endl;
        }
        void showdata() {

cout<<"welcome to child class overriding\n";
    book bp ,b1 ,b2, b;
       b1.setbook_d(10 ,"book1" , 1);
       b2.setbook_d(25 ,"book2" , 2);
    customers cp ,c1 ,c2;
       c1.setcustomers_d("mohammed", 1);
       c2.setcustomers_d("ahmed", 2);
    employee ep ,e1 ,e2;
       e1.setemployee_d("yaman", 1);
       e2.setemployee_d("kaled", 2);
    transactions tp ,t1 ,t2;
       t1.settran_d(7);
       t2.settran_d(0);

    while (true) {
        cout<<"enter password or enter -1 to exit: ";
        string pw;
        cin>>pw;
            if (bp.getpassword_b()==pw) {
                cout << "book:" << endl;
                cout <<"id: "<<b1.getip_b()<<" name: "<<b1.getname_b()<<" price: "<<b1.getprice_b()<<endl;
                cout <<"id: "<<b2.getip_b()<<" name: "<<b2.getname_b()<<" price: "<<b2.getprice_b()<<endl;
                    b.inputBook();
                    b.displayBook();
    }
            if (cp.getpassword_c()==pw) {
                cout << "customers:" << endl;
                cout <<"id: "<<c1.getip_c()<<" name: "<<c1.getname_c()<<endl;
                cout <<"id: "<<c2.getip_c()<<" name: "<<c2.getname_c()<<endl;
    }
            if (ep.getpassword_e()==pw) {
                cout << "employee:" << endl;
                cout <<"id: "<<e1.getip_e()<<" name: "<<e1.getname_e()<<endl;
                cout <<"id: "<<e2.getip_e()<<" name: "<<e2.getname_e()<<endl;
    }

           if (tp.getpassword_t()==pw) {
                cout << "transactions:" << endl;
                cout <<"to by enter 1 to borrow enter 2: ";
                int t;
                cin>>t;
                    if (t==1) {
                        cout<<"thank you for buy \n";
                    }
                    if (t==2) {
                        cout<<"thank you for borrow \n";
                        cout<<"day :"<<t1.getday_t()<<endl;
                    }
                    if (t!=1 && t!=2) {
                        cout <<"you enter wrong input \n";
                    }
    }
            if (pw=="-1") {
                break;
            }
}
    }
};
int main() {
    library l1;
    l1.showdata();

    childL cl("Amman",10.0), cl1("Irbid"); //overloading
    cl.showdata();


    cl.setData("Khaled", "Good", 5);
    cl.display();


    cl.setNotification("New books have arrived , Check them out now");
    cl.showNotification();

    return 0;
}
