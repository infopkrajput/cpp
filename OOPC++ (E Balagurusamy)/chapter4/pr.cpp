/*A Shopkeeper wants to maintain the stock database category wise (electronic applications,food items,clothing. milk product,kitchen product).
specify all the classes and fuctions as per the relationship between different products.*/
#include <iostream>
using namespace std;
class Shop
{
    static int id;

protected:
    string name;
    float price;

public:
    void input_Shop();
    void print_Shop();
};
int Shop::id = 0;
void Shop::input_Shop()
{
    cout << "Enter the Item Name = ";
    cin >> name;
    id++;
}

void Shop::print_Shop()
{
    cout << "Item Id = " << id << endl;
    cout << "Item Name = " << name << endl;
}

class Electronic_applications : public Shop
{
private:
    long long int serial_no;

public:
    void purchase_Electronic_applications();
    void sale_Electronic_applications();
    void input_Electronic_applications();
    void print_Electronic_applications();
};
void Electronic_applications::purchase_Electronic_applications()
{
    input_Shop();
    cout << "Enter the Purchased Price = ";
    cin >> price;
}
void Electronic_applications::sale_Electronic_applications()
{
    cout << "Enter the sale Price = ";
    cin >> price;
}
void Electronic_applications::input_Electronic_applications()
{
    input_Shop();
    cout << "Enter the serial No. = ";
    cin >> serial_no;
}

void Electronic_applications::print_Electronic_applications()
{
    print_Shop();
    cout << "Serial No = " << serial_no << endl;
}

class Food_items : Shop
{
private:
    char h, f;

public:
    void input_Food_items();
    void print_Food_items();
};

void Food_items::input_Food_items()
{
    cout << "Press 'h' for Half: ";
    cin >> h;
    cout << "Press 'f' for Full: ";
    cin >> f;
}

void Food_items::print_Food_items()
{
    cout << "Half = " << h << endl;
    cout << "Full = " << f << endl;
}

class Clothes : public Shop
{
private:
    float meters;

public:
    void input_Clothes();
    void print_Clothes();
};

void Clothes::input_Clothes()
{
    cout << "Enter the clothes size (in meters): ";
    cin >> meters;
}

void Clothes::print_Clothes()
{
    cout << "Clothes size = " << meters << endl;
}

class Milk_products : public Shop
{
private:
    float liter;

public:
    void input_Milk_products();
    void print_Milk_products();
};

void Milk_products::input_Milk_products()
{
    cout << "Enter the Milk quantity (in liters): ";
    cin >> liter;
}

void Milk_products::print_Milk_products()
{
    cout << "Milk quantity = " << liter << endl;
}

class Kitchen_products
{
private:
    int quantity;

public:
    void input_Kitchen_products();
    void print_Kitchen_products();
};

void Kitchen_products::input_Kitchen_products()
{
    cout << "Enter the Kitchen products quantity: ";
    cin >> quantity;
}

void Kitchen_products::print_Kitchen_products()
{
    cout << "Kitchen products quantity = " << quantity << endl;
}

int main()
{
    int choice;
    bool continue_program = true;

    while (continue_program)
    {
        cout << "\nChoose a category to manage:\n";
        cout << "1. Electronic Applications\n";
        cout << "2. Food Items\n";
        cout << "3. Clothes\n";
        cout << "4. Milk Products\n";
        cout << "5. Kitchen Products\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Electronic_applications e;
            e.input_Electronic_applications();
            e.print_Electronic_applications();
            break;
        }
        case 2:
        {
            Food_items f;
            f.input_Food_items();
            f.print_Food_items();
            break;
        }
        case 3:
        {
            Clothes c;
            c.input_Clothes();
            c.print_Clothes();
            break;
        }
        case 4:
        {
            Milk_products m;
            m.input_Milk_products();
            m.print_Milk_products();
            break;
        }
        case 5:
        {
            Kitchen_products k;
            k.input_Kitchen_products();
            k.print_Kitchen_products();
            break;
        }
        case 6:
        {
            continue_program = false;
            break;
        }
        default:
            cout << "Invalid choice! Please select again.\n";
        }
    }

    return 0;
}
