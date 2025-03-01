#include <string>
#include "Pet.h"

using namespace std;

// Put your constructor code here!
Pet::Pet() {
  name = "Rover";
  birth_year = 2018;
  type = "dog";
  owner_name = "Wade";
}

Pet::Pet(string new_name, int new_birth, string new_type, string new_owner) {
  name = new_name;
  birth_year = new_birth;
  type = new_type;
  owner_name = new_owner;
}

void Pet::setName(string newName) {
  name = newName;
}

void Pet::setBY(int newBY) {
  birth_year = newBY;
}

void Pet::setType(string newType) {
  type = newType;
}

void Pet::setOwnerName(string newName) {
  owner_name = newName;
}

string Pet::getName() {
  return name;
}

int Pet::getBY() {
  return birth_year;
}

string Pet::getType() {
  return type;
}

string Pet::getOwnerName() {
  return owner_name;
}
