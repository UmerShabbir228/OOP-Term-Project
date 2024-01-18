#pragma once
#include <iostream>
#include <vector>
#include "Customer.h"

class ShopOwner {
private:
    int ownerId;
    std::string ownerName;
    std::vector<Customer*> customers;

public:
    ShopOwner();
    ShopOwner(int id, const std::string& name);

    void addCustomer(Customer* customer);
    void removeCustomer(int customerId);
    Customer* searchCustomerById(int customerId);
    Customer* searchCustomerByName(const std::string& customerName);
    int totalAppointments();

    void display() const;

    ~ShopOwner();
};
