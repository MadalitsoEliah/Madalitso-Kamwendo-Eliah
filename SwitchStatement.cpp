#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
     srand(time(0));

     int daysUntilExpiration = rand() % 12;
     std::cout << "Days remaining: " << daysUntilExpiration << std::endl;

     switch(daysUntilExpiration){
        case 0:
             std::cout << "Your subscription has expired." << std::endl;
             break;
        case 1:
             std::cout << "Your Subscription expires within a day!" << std::endl;
             break;
             std::cout << "Renew now and save 20%" << std::endl;
             break;
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "your Subscription expires in" <<daysUntilExpiration<< "days." << std::endl;

            std::cout << "Renew now and save 10%!" << std::endl;
            break;
        
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            std::cout << "Your subscription will expire soon. renew now!" << std::endl;
            break;

        case 11:
            std::cout << "You have an active subscription." << std::endl;
            break;
     }
        
        return 0;
        
}