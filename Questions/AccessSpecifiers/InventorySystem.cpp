#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int id;
    int quantity;

public:
    void setDetails(string n, int i, int q) {
        name = n;
        id = i;
        quantity = q;
    }

    int getId() {
        return id;
    }

    void restock(int q) {
        quantity += q;
        cout << "Product ID: " << id << " restocked. New Quantity: " << quantity << endl;
    }

    void sell(int q) {
        if (q > quantity) {
            cout << "Not enough stock to sell for Product ID: " << id << endl;
        } else {
            quantity -= q;
            cout << "Product ID: " << id << " sold. Remaining Quantity: " << quantity << endl;
        }
    }

    void display() {
        cout << "Product ID: " << id << ", Name: " << name << ", Quantity: " << quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products to add: ";
    cin >> n;

    Product inventory[100]; // assuming max 100 products

    // Add product details
    for (int i = 0; i < n; i++) {
        string name;
        int id, qty;
        cout << "Enter product " << i + 1 << " name, ID, quantity: ";
        cin >> name >> id >> qty;
        inventory[i].setDetails(name, id, qty);
    }

    // Restock
    int restockCount;
    cout << "\nEnter number of products to restock: ";
    cin >> restockCount;
    for (int i = 0; i < restockCount; i++) {
        int rid, qty;
        cout << "Enter product ID to restock: ";
        cin >> rid;
        cout << "Enter quantity to add: ";
        cin >> qty;

        bool found = false;
        for (int j = 0; j < n; j++) {
            if (inventory[j].getId() == rid) {
                inventory[j].restock(qty);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Product ID not found." << endl;
        }
    }

    // Sell
    int sellCount;
    cout << "\nEnter number of products to sell: ";
    cin >> sellCount;
    for (int i = 0; i < sellCount; i++) {
        int sid, qty;
        cout << "Enter product ID to sell: ";
        cin >> sid;
        cout << "Enter quantity to sell: ";
        cin >> qty;

        bool found = false;
        for (int j = 0; j < n; j++) {
            if (inventory[j].getId() == sid) {
                inventory[j].sell(qty);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Product ID not found." << endl;
        }
    }

    // Display
    int displayCount;
    cout << "\nEnter number of products to display: ";
    cin >> displayCount;
    for (int i = 0; i < displayCount; i++) {
        int did;
        cout << "Enter product ID to display: ";
        cin >> did;

        bool found = false;
        for (int j = 0; j < n; j++) {
            if (inventory[j].getId() == did) {
                inventory[j].display();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Product ID not found." << endl;
        }
    }

    return 0;
}
