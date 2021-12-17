

#include <iostream>
#include <string>

bool heatSource = false;
int cupsWanted = 0;

class CoffeMechine
{
    public:
    int hopperHolds;
    int cupHolds;
    int waterRes;
    int waterheat;
    int cups;

    int CupsOfCoffee()
    {
        //int cupsWanted;
        std::cout << "select amount of cup of coffee: 1, 2, 3, 4" << std::endl;
        std::cin >> cupsWanted;
        std::cout << cupsWanted << std::endl;

        return cupsWanted;
    
    
    }

    void MakeCoffee()
    {
        //CoffeMechine run;
        heatSource = true;
        //int cupsLimit = 0;
        while (heatSource == true && cups < cupsWanted)
        {

            if(hopperHolds >= 50 && waterRes >= 250)
            {
            cups ++;
            hopperHolds -=50;
            waterRes -= 250;
            std::cout << cups << " Cups of coffee " << std::endl;
            std::cout << "hopper now holds " << hopperHolds << std::endl; 
            std::cout << "Water Reservoir now holds " << waterRes << std::endl; 
            }
            else
            {
            std::cout << "not enough ingredients to make coffee" << std:: endl;
            //heatSource == false;
            break;
            }
        }
            
    }
    int Process()
    {
        std::cout << "Mechine starting..." << std::endl;
        std::cout << "hopper holds " << CoffeMechine().hopperHolds << " beans"<< std::endl;
        std::cout << "Water Reservoir holds " << CoffeMechine().waterRes << " of grams" << std::endl;
        std::cout << "water is boiling..." << std::endl;
        std::cout << "water is boiling..." << std::endl;
        std::cout << "water is boiling..." << std::endl;
        return CoffeMechine().waterheat == 100;
        std::cout << "water has boiled to " << CoffeMechine().waterheat << " Celsius"<< std::endl;

    }

};




int main()
{

    CoffeMechine c1;
    c1.hopperHolds = 200;
    c1.cupHolds = 50;
    c1.waterRes = 1000;
    c1.waterheat = 30;
    c1.cups = 0;

    c1.CupsOfCoffee();
    c1.Process();
    c1.MakeCoffee();


   return 0;    
    
}