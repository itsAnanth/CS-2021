#include <bits/stdc++.h>

static bool run = true;

void runThread() {
    while(run) {
        std::cout << "threading" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main() {
    std::thread worker(runThread);
    std::cin.get();
    run = false;
    worker.join();
    std::cout << "joined thread back to main" << std::endl;
    std::cout << "exiting" << std::endl;
    return 0;
}