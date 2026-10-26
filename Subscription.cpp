#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    int daysUntilExpiration = rand() % 12;

    cout << "Days remaining: " <<daysUntilExpiration << endl;

    if(daysUntilExpiration == 0){
        cout << "Your subscription has expired. " << endl;
    }
    else if(daysUntilExpiration == 1){

        cout << "Your Subscription expires within a day!" <<endl;
        cout << "Renew now and save 20%!" << endl;
    }
    else if(daysUntilExpiration <= 5){
        cout << "Your Subscription expires in " <<daysUntilExpiration << "days." << endl;
        cout << "Renew now and save 10%!" <<endl;

    }
    else if(daysUntilExpiration <= 10){
        cout << "Your Subscription will expire soon. Renew now!" << endl;

    }
    else{
        cout << "You have an active Subscripition." << endl;
    }

    return 0;


} 



