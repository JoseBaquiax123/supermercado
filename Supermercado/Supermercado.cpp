#include <mysql.h>
#include <iostream>
using namespace std;


int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "Umg$2019", "new_schema", 3306, NULL, 0);
    
        if (conectar) {
    
    cout << "conexion exitosa..."<<endl;
        }
        else {
            cout << "error conexion..." << endl;
        }
    system("pause");
    return 0;
}
