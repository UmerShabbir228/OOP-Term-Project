#include "Customer.h"

Customer::Customer() : customerId(0), customerName("") {}

Customer::Customer(int id, const std::string& name) : customerId(id), customerName(name) {}

void Customer::display() const {
    std::cout << "Customer ID: " << customerId << ", Name: " << customerName << std::endl;
    // Display other details
}

Customer::~Customer() {
    // Cleanup code if needed
}
