#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Item class representing an inventory item
class Item {
private:
    string name;
    int id;
public:
    // Constructor
    Item(string name, int id) : name(name), id(id) {}

    // Getter methods
    string getName() const { return name; }
    int getId() const { return id; }
};

// Inventory class representing the inventory management system
class Inventory {
private:
    vector<Item> items; // Vector to store items
public:
    // Method to add an item to the inventory
    void addItem(string name, int id) {
        Item newItem(name, id);
        items.push_back(newItem);
        cout << "Item added successfully." << endl;
    }

    // Method to display all items in the inventory
    void displayItems() const {
        if (items.empty()) {
            cout << "Inventory is empty." << endl;
            return;
        }

        cout << "Inventory Items:" << endl;
        for (const Item &item : items) {
            cout << "ID: " << item.getId() << ", Name: " << item.getName() << endl;
        }
    }

    // Method to search for an item by name
    void searchByName(string name) const {
        bool found = false;
        for (const Item &item : items) {
            if (item.getName() == name) {
                cout << "Item found - ID: " << item.getId() << ", Name: " << item.getName() << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Item not found." << endl;
        }
    }

    // Method to search for an item by ID
    void searchById(int id) const {
        bool found = false;
        for (const Item &item : items) {
            if (item.getId() == id) {
                cout << "Item found - ID: " << item.getId() << ", Name: " << item.getName() << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Item not found." << endl;
        }
    }
};

int main() {
    Inventory inventory;
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add item" << endl;
        cout << "2. Display all items" << endl;
        cout << "3. Search item by name" << endl;
        cout << "4. Search item by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                string name;
                int id;
                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter item ID: ";
                cin >> id;
                inventory.addItem(name, id);
                break;
            }
            case 2:
                inventory.displayItems();
                break;
            case 3: {
                string name;
                cout << "Enter item name to search: ";
                cin >> name;
                inventory.searchByName(name);
                break;
            }
            case 4: {
                int id;
                cout << "Enter item ID to search: ";
                cin >> id;
                inventory.searchById(id);
                break;
            }
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}