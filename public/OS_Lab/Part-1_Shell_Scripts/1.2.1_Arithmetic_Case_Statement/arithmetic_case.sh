#!/bin/bash
read -p "enter two numbers: " a b
read -p "Enter an operator (+, -, *, /, %): " op

case $op in
     '+') echo "Addition = $((a + b))" ;;
     '-') echo "Subtraction = $((a - b))" ;;
     '*') echo "Product = $((a * b))" ;;
     '/') echo "Division = $((a / b))" ;;
     '%') echo "Remainder = $((a % b))" ;;
     *)   echo "Invalid operator entered" ;;
esac