#include <iostream>

#define SPRING 1  //= "Spring"
#define SUMMER 2  //= "Summer"
#define AUTUMN 3  //= "Autumn"
#define WINTER 4  //= "Winter"

#define SEASON 2

int main() {
#if (SEASON == SPRING)
  std::cout << "Spring" << std::endl;
#endif
#if (SEASON == SUMMER)
  std::cout << "Summer" << std::endl;
#endif
#if (SEASON == AUTUMN)
  std::cout << "Autumn" << std::endl;
#endif
#if (SEASON == WINTER)
  std::cout << "Winter" << std::endl;
#endif

  return 0;
}
