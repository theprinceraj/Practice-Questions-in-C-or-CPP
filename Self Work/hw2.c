#include <stdio.h>

struct item {
  char itemName[30];
  int qty;
  float price;
  float amount;
};
int main() {
  struct item item;
  struct item *pItem;
  pItem = &item;
  printf("Enter product name: ");
  gets(pItem->itemName);
  printf("Enter price: ");
  scanf("%f", &pItem->price);
  printf("Enter quantity: ");
  scanf("%d", &pItem->qty);
  pItem->amount = (float)pItem->price * pItem->qty;
  printf("Product Name: %s\nProduct Price: %.2f\nQuantity: %d\nTotal: %.2f",
         pItem->itemName, pItem->price, pItem->qty, pItem->amount);
  return 0;
}