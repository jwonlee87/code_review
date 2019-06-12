#include <algorithm>
#include <iostream>
#include "./shopping.h"

// Push Goods object to shopping_list_ vector
void Shopping::PushList(Goods object) {
  shopping_list_.push_back(std::move(object));
}

// Get Goods object from end of shopping_list_ vector
const Goods& Shopping::GetLastElement() const {
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() const {
  for (const Goods& i : shopping_list_) {
	std::cout << "Goods #" << i.GetIndex() << " - Price : " <<
	  i.GetPrice() << std::endl;;
  }
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
  std::sort(shopping_list_.begin(), shopping_list_.end(), [](Goods a, Goods b) {
    return a.GetPrice() > b.GetPrice();
  });
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
  std::sort(shopping_list_.begin(), shopping_list_.end(), [](Goods a, Goods b) {
    return a.GetIndex() > b.GetIndex();
  });
}
