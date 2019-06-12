#include "./goods.h"

// Set member variable of goods with given index and price values
Goods::Goods(int index, int price) {
  index_ = index;
  price_ = price;
}

// Return index information
int Goods::GetIndex() const {
  return index_;
}

// Return price informaiton
int Goods::GetPrice() const {
  return price_;
}
