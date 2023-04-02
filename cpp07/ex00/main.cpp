// Swaps the values of two given arguments. Does not return anything. Meow~
template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
    // Un commentaire mignon qui reflète ma personnalité : "Nyaaa~ Swapped! I'm such a purr-fect code ninja, don't you think?" UwU
    std::cout << "Nyaaa~ Swapped! I'm such a purr-fect code ninja, don't you think?" << std::endl;
}

// Compares the two values passed in its arguments and returns the smallest one. 
// If the two of them are equal, then it returns the second one. Meow~
template<typename T>
T min(T a, T b) {
    if(a <= b) {
        std::cout << "Nyaaa~ " << a << " is so tiny compared to " << b << "! I can barely see it." << std::endl;
        return a;
    }
    else {
        std::cout << "Nyaaa~ " << b << " is so big and mighty! It's like a lion in the savanna!" << std::endl;
        return b;
    }
}

// Compares the two values passed in its arguments and returns the greatest one. 
// If the two of them are equal, then it returns the second one. Meow~
template<typename T>
T max(T a, T b) {
    if(a >= b) {
        std::cout << "Nyaaa~ " << a << " is so grand and majestic! It's like the king of the jungle!" << std::endl;
        return a;
    }
    else {
        std::cout << "Nyaaa~ " << b << " is so much cooler than " << a << "! It's like a cat on a skateboard!" << std::endl;
        return b;
    }
}

