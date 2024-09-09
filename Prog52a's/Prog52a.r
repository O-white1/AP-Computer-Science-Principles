length = readline(prompt = "Length: ") ; length = as.integer(length);
width = readline(prompt = "Width: ") ;   width = as.integer(width);

area = length*width;
perimeter = length*2 + width*2;

print("Area: ", area, "\n")
print("Perimeter: ", perimeter)