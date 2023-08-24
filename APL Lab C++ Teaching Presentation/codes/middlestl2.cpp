    // Update the slowPointer slowly and fastPointer quickly

    while (fastPointer != list->end() && 
           std::next(fastPointer, 1) != list->end()) {

        std::advance(slowPointer, 1);
        std::advance(fastPointer, 2);
    }

    return *slowPointer;

}