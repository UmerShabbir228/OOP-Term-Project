#include "ShopOwner.h"
#include "Customer.h"

int main() {
    // Dummy data or data loaded from CSV file
    ShopOwner shopOwner(1, "Shop Owner 1");
    Customer customer1(101, "Customer 1");
    Customer customer2(102, "Customer 2");

    shopOwner.addCustomer(&customer1);
    shopOwner.addCustomer(&customer2);

    shopOwner.display();

    return 0;
}
