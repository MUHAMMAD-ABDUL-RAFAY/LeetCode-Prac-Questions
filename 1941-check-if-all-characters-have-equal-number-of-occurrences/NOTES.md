​Algorithm
The program first creates an unordered_map to store the occurrences of each character in the string. The unordered_map is initialized with all characters having an occurrence of 0.

The program then iterates over the string, incrementing the occurrence of each character in the unordered_map.

After the string has been iterated over, the program checks if all the values in the unordered_map are equal. If they are, the program returns True. Otherwise, the program returns False.

Time Complexity
The time complexity of the program is O(n), where n is the length of the string. This is because the program iterates over the string once.

Space Complexity
The space complexity of the program is O(n), where n is the length of the string. This is because the program uses an unordered_map to store the occurrences of each character in the string.
