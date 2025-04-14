#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int id;
    int quantity;

public:
    void setDetails() {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter initial quantity: ";
        cin >> quantity;
    }

    void restock() {
        int restockQty;
        cout << "Enter quantity to restock for Product ID " << id << ": ";
        cin >> restockQty;
        quantity += restockQty;
    }

    void sell() {
        int sellQty;
        cout << "Enter quantity to sell for Product ID " << id << ": ";
        cin >> sellQty;
        if (sellQty <= quantity) {
            quantity -= sellQty;
        } else {
            cout << "Not enough stock to sell!\n";
        }
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Quantity: " << quantity << endl;
    }
};

int main() {
    const int MAX = 100;
    int n;
    cout << "Enter how many products to add to inventory (max " << MAX << "): ";
    cin >> n;

    if (n > MAX || n <= 0) {
        cout << "Invalid number of products. Try again.\n";
        return 1;
    }

    Product products[MAX];

    // Set initial details
    for (int i = 0; i < n; i++) {
        cout << "\n--- Product " << i + 1 << " ---" << endl;
        products[i].setDetails();
    }

    int choice;
    do {
        cout << "\nChoose Operation:\n";
        cout << "1. Restock\n";
        cout << "2. Sell\n";
        cout << "3. Display All Products\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                for (int i = 0; i < n; i++) {
                    products[i].restock();
                }
                char show;
                cout << "Do you want to display restocked products? (y/n): ";
                cin >> show;
                if (show == 'y' || show == 'Y') {
                    for (int i = 0; i < n; i++) {
                        cout << "Product " << i + 1 << ": ";
                        products[i].display();
                    }
                }
                break;
            }

            case 2: {
                for (int i = 0; i < n; i++) {
                    products[i].sell();
                }
                char show;
                cout << "Do you want to display sold product details? (y/n): ";
                cin >> show;
                if (show == 'y' || show == 'Y') {
                    for (int i = 0; i < n; i++) {
                        cout << "Product " << i + 1 << ": ";
                        products[i].display();
                    }
                }
                break;
            }

            case 3:
                for (int i = 0; i < n; i++) {
                    cout << "Product " << i + 1 << ": ";
                    products[i].display();
                }
                break;

            case 0:
                cout << "Exiting program. Bye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
