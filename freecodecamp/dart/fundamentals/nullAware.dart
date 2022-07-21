// api
class Num {
  int num = 10;
}

main() {
  int n = Num();
  int number;

  number = n?.num;

  print(number);
}
