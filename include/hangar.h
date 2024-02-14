#ifndef HANGAR_H
#define HANGAR_H

#include <iostream>
#include <fstream>

/**
 * @brief Append the message to the output file and print it to the console.
 * 
 * @param message The message to be appended to the output file and printed to the console.
 */
void customOutput(const std::string& message) {
    // Open the output file in append mode
    std::ofstream file("output.txt", std::ios_base::app);
    // Print the message to the console
    std::cout << message;
    // Append the message to the output file
    file << message;
    // Close the output file
    file.close();
}

class Hangar {
private:
    size_t _width; // Width of the hangar
    size_t _length; // Length of the hangar
    size_t _area; // Area of the hangar
public:
    Hangar();
    Hangar(const size_t& _w, const size_t& _l);
    void set(size_t& _w, size_t& _l);
    size_t area();
    void print();
};

/**
 * @brief Constructor for Hangar class.
 */
Hangar::Hangar(){
    this->_width = 0; // Initialize _width to 0
    this->_length = 0; // Initialize _length to 0
    this->_area = 0; // Initialize _area to 0
}

/**
 * @brief Constructor for Hangar class.
 *
 * @param _w The _width of the hangar
 * @param _l The _length of the hangar
 */
Hangar::Hangar(const size_t& _w, const size_t& _l) {
    this->_width = _w; // Initialize _width to _w
    this->_length = _l; // Initialize _length to _l
    this->_area = _w * _l; // Initialize _area to _w * _l
}

/**
 * @brief Set the dimensions of the hangar.
 *
 * @param _w The _width of the hangar
 * @param _l The _length of the hangar
 */
void Hangar::set(size_t& _w, size_t& _l) {
    this->_width = _w; // Initialize _width to w
    this->_length = _l; // Initialize _length to l
    this->_area = _w * _l; // Initialize _area to _w * _l
}

/**
 * @return The _area of the hangar.
 */
size_t Hangar::area() {
    return this->_area;
}

/**
 * @brief Print the details of the hangar including _width, _length and _area.
 */
void Hangar::print() {
    // Print _width
    customOutput("Width: " + std::to_string(this->_width) + " meters\n");
    // Print _length
    customOutput("Length: " + std::to_string(this->_length) + " meters\n");
    // Print _area
    customOutput("Area: " + std::to_string(this->_area) + " square meters\n");
}

#endif // HANGAR_H
