#include <stdio.h>

struct exercise {
  const char *description;
  float duration;
}

struct meal {
  const char *ingredients;
  float weight;
}

struct preferences {
  struct meal food;
  struct exercise exercise;
}

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
  struct preferences care;
};

void catalog (struct fish f) {
  printf("Name: %s\n Species: %s\n %i years old, %i teeth\n",
          f.name, f.species, f.age, f.teeth);
}

int main(){
  struct fish snappy = {"Snappy", "Piranha", 69, 4};
  catalog(snappy);
  return 0;

}
