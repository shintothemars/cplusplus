#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>

using namespace std;

// Struktur data produk
struct Product {
    int id;
    string name;
    double price;
};

int main() {

    // ===============================
    // 1. PRODUCT CATALOG (VECTOR)
    // ===============================
    vector<Product> catalog = {
        {101, "Laptop", 8500000},
        {102, "Mouse", 150000},
        {103, "Keyboard", 350000}
    };

    cout << "========== PRODUCT CATALOG ==========\n";

    for (Product p : catalog) {
        cout << "ID: " << p.id
             << " | Name: " << p.name
             << " | Price: Rp." << p.price << endl;
    }

    cout << endl;

    // ===============================
    // 2. SUPPLY CHAIN (LIST)
    // ===============================
    list<string> shipments;

    shipments.push_back("Truck A");
    shipments.push_back("Truck C");

    // Menyisipkan Truck B di tengah
    auto it = shipments.begin();
    it++;
    shipments.insert(it, "Truck B");

    cout << "========== SHIPMENT SCHEDULE ==========\n";

    for (string truck : shipments) {
        cout << truck << " -> ";
    }

    cout << "END\n\n";

    // ===============================
    // 3. ORDER PIPELINE (QUEUE)
    // ===============================
    queue<string> orders;

    orders.push("Order #1001");
    orders.push("Order #1002");
    orders.push("Order #1003");

    cout << "========== PROCESSING ORDERS ==========\n";

    while (!orders.empty()) {
        cout << "Processing: " << orders.front() << endl;
        orders.pop();
    }

    cout << endl;

    // ===============================
    // 4. ERROR LOG (STACK)
    // ===============================
    stack<string> history;

    history.push("Added Laptop");
    history.push("Updated Mouse Price");
    history.push("Deleted Keyboard");

    cout << "========== UNDO LAST ACTION ==========\n";

   .top() << endl;
    history.pop(); cout << "Undo: " << history

    cout << "Current Last Action: " << history.top() << endl;

    return 0;
}