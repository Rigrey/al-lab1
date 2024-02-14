#include <vector>
#include "hangar.h"

// Function to create dynamic array of hangars and calculate total area
void laba_dyn_array(){
  // Initialize variables
  std::ifstream input("input.txt");
  size_t n = 0; // Number of hangars
  size_t total_area = 0; // Total area of all hangars
  input >> n;
  Hangar *hangars[n]; // Dynamic array to store hangars
  for (size_t i = 0; i < n; ++i) {
    size_t w, l;
    input >> w >> l; // Get the width and length of the hangar
    hangars[i] = new Hangar(w, l); // Create new hangar object
  }
  // Calculate total area and print details of each hangar
  for (size_t i = 0; i < n; ++i) {
    total_area += hangars[i]->area();
    customOutput("\nDetails of hangar " + std::to_string(i + 1) + ": \n"); // Output message
    hangars[i]->print(); // Print details of hangar
    customOutput("\n");
  }
  customOutput("Total area of all hangars: " + std::to_string(total_area) + " square meters\n\n"); // Output message
  // Free memory allocated for hangar objects
  for (size_t i = 0; i < n; ++i) {
    delete hangars[i];
  }
}

// Function to calculate the total area of hangars and display their details
void laba_vector(){
  std::ifstream input("input.txt");
  // Initialize variables
  size_t n = 0;  // Number of hangars
  
  size_t total_area = 0;  // Total area of all hangars
  std::vector<Hangar> hangars;  // Vector to store Hangar objects

  input >> n;

  for (size_t i = 0; i < n; ++i) {
    size_t w, l;
    input >> w >> l;
    hangars.push_back(Hangar(w, l));
  }

  for (size_t i = 0; i < n; ++i) {
    total_area += hangars[i].area();
    customOutput("\nDetails of hangar " + std::to_string(i + 1) + ": \n");
    hangars[i].print();
    customOutput("\n");
  }

  customOutput("Total area of all hangars: " + std::to_string(total_area) + " square meters\n\n");
}

int main() {
  std::ios_base::sync_with_stdio(false);
  customOutput("Here is the implemention of Hangar class(V20) with vector \n");
  laba_vector();
  customOutput("Here is the implemention of Hangar class(V20) with dynamic array \n");
  laba_dyn_array();
  return 0;
}
