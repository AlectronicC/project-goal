#include <iostream>

std::string input_name, input_name2, input_name3, input_name4;
std::string vocation;
std::string product;
int currentmoney;
std::string choice; // yes or no
int input; // 1, 2, 3, 4, and 5
bool start;

// trail of organ reference noted

struct ShopItems
{
    std::string simplename; // simplified name
    int money; // the cost of the item
    int count = 0; // the amount of the items you have
};

class Squad : public ShopItems
{
public:

std::string driver, friend2, friend3, friend4;


void GetInput(std::string driver, std::string friend2, std::string friend3, std::string friend4)
{
    
    driver = input_name;
    friend2 = input_name2;
    friend3 = input_name3;
    friend4 = input_name4;
    
}

void GetJob(int input)
{
    if (input == 1)  
   {
       vocation = "Heart Surgeon";
       currentmoney = 10000;
   }
   if (input == 2) 
   {
       vocation = "Cow Liver Maker";
       currentmoney = 2500;
   }
   if (input == 3) 
   {
       vocation = "Organ Merchant";
       currentmoney = 500;
   }
   if (input == 4) 
   {
       vocation = "Slave";
       currentmoney = 50;
   }
   if (input == 5) 
   {
       vocation = "Homeless";
       currentmoney = 0;
   }
}

void Shop()
{
    // shop items here (future me : that's a lie)
    
    // make it so that you can buy several times
    std::cin >> product;
    
}

};

int main() 
{
    Squad name;
    ShopItems beanies, water, clothes, cheeseburger, gun, pc, sak, forcefield, car, ressurector;

    beanies.simplename = "beanies";
    water.simplename = "water";
    clothes.simplename = "clothes";
    cheeseburger.simplename = "cheeseburger";
    gun.simplename = "gun";
    pc.simplename = "pc";
    sak.simplename = "sak";
    forcefield.simplename = "forcefield";
    car.simplename = "car";
    ressurector.simplename = "ressurector";

    //beanies money here
    water.money = 2;
    clothes.money = 10;
    cheeseburger.money = 15;
    gun.money = 500;
    pc.money = 1000;
    sak.money = 2000;
    forcefield.money = 3000;
    car.money = 5000;
    ressurector.money = 9000;
    
  std::cout << "Welcome to Organ Trail : The Bane of Chaos!" << std::endl;
  std::cout << "Enter the Driver Name : " << std::endl;
  std::cin >> input_name;
    
  std::cout << "Enter 3 Names for your Friends" << std::endl;
  std::cin >> input_name2;
  std::cin >> input_name3;
  std::cin >> input_name4;
    
  name.GetInput(input_name, input_name2, input_name3, input_name4);
    
  std::cout << "Your driver's name is : " << input_name << std::endl;
  std::cout << "Your friend's name is : " << input_name2 << std::endl;
  std::cout << "Your second friend's name is : " << input_name3 << std::endl;
  std::cout << "Your third friend's name is : " << input_name4 << std::endl;


    
    // occupation
    std::cout << "What is your occupation? (Note : Occupation determines difficulty due to different income)" << std::endl;
    std::cout << "Option 1 : The Heart Surgeon" << std::endl; // super easy
    std::cout << "Option 2 : The Cow Liver Maker" << std::endl; // easy
    std::cout << "Option 3 : The Organ Merchant" << std::endl; // medium
    std::cout << "Option 4 : The Slave" << std::endl; // hard 
    std::cout << "Option 5 : None! (You are homeless)" << std::endl; // impossible

    std::cin >> input;

    name.GetJob(input);
    
    //buy stuff

    std::cout << "You have " << currentmoney << " dollars." << std::endl;

    std::cout << "The merchant is here to give us the supplies!" << std::endl;

    // 10 items
    std::cout << "Ressurector (ressurector) : $9000" << std::endl;
    std::cout << "Another Car (car) : $5000" << std::endl;
    std::cout << "Force Field Shield (forcefield) : $3000" << std::endl;
    std::cout << "Second Aid Kit (sak) : $2000" << std::endl;
    std::cout << "Portable Computer (pc) : $1000" << std::endl;
    std::cout << "Big Gun (gun) : $500" << std::endl;
    std::cout << "Cheeseburgers (cheeseburger) : $15 per burger" << std::endl;
    std::cout << "Clothes with Cool Colors!!! (clothes) : $10 per set" << std::endl;
    std::cout << "Bottle of Professionally Approved Hydrating Water (water) : $2 per bottle" << std::endl;
    std::cout << "Beanies (beanies) : $1 per can" << std::endl;
    std::cout << "Enter their simplified names in parentheses" << std::endl;
    std::cout << "Type 'finish' if you are finished with shopping" << std::endl;

    name.Shop();

    if (product, "beanies")
    {
        beanies.count++;
        std::cout << "You have bought " << beanies.count << " can of beanies\n";
        beanies.money = beanies.count * 1;
    }
    name.Shop();
    
    if (product, "finish")
    {
        int totalmoney = beanies.money;
        std::cout << "Your total bill is " << totalmoney << " dollars" <<  std::endl;
    }
    // starting region (organ references)
  return 0;
}
