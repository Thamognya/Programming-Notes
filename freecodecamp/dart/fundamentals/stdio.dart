// import 'dart:core'; // dont need to improt this as this auto imported
import 'dart:io';

main() {
  stdout.writeln('What is your name? ');
  String? name =
      stdin.readLineSync(); // becuase it can be null there must be a ?
  print("My name is $name");
}

/// for documentation