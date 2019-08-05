#include <iostream>
using namespace std;

void sort (int array[])
{
for ( int i = 0; i < 100; i++ )
{
int index = findSmallestRemainingElement( array, i );
swap( array, i, index );
}
}

int findSmallestRemainingElement (int array[], int size, int index)
{
int index_of_smallest_value = index;
for (int i = index + 1; i < size; i++)
{
if ( array[ i ] < array[ index_of_smallest_value ] )
{
index_of_smallest_value = i;
}
}
return index_of_smallest_value;
}
void sort (int array[], int size)
{
for ( int i = 0; i < size; i++ )
{
int index = findSmallestRemainingElement( array, size, i );
swap( array, i, index );
}
}
void swap (int array[], int first_index, int second_index)
{
int temp = array[ first_index ];
array[ first_index ] = array[ second_index ];
array[ second_index ] = temp;
}

int main() {
int values[50];

for (int i=0;i<50;i++) {
cout << "Please input number " << i << ":";
cin >> values[i];
}
}

