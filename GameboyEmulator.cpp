#include <cstdint>
#include <iostream>
class CPU{
public:
class instructions{
    void ADD(unsigned char rega,unsigned char regb);

};



class registers {
    public:
    std::uint8_t a;
    std::uint8_t b;
    std::uint8_t c;
    std::uint8_t d;
    std::uint8_t e;
    std::uint8_t h;
    std::uint8_t l;
    struct flag_register {
        std::uint8_t zero_flag;
        std::uint8_t subtraction_flag;
        std::uint8_t half_carry_flag;
        std::uint8_t carry_flag;
        std::uint8_t flag_to_int8() {
        std::uint8_t ZELGORAN = 0;
        if (zero_flag) {ZELGORAN |= (1 << 7);}
        if (subtraction_flag) {ZELGORAN |= (1 << 6);}
        if (half_carry_flag) {ZELGORAN |= (1 << 5);}
        if (carry_flag) {ZELGORAN |= (1 << 4);}
        return ZELGORAN;}
};
    std::uint16_t XVI_bit_register(std::uint8_t reg1, std::uint8_t reg2) {
    std::uint16_t D = (std::uint16_t)reg1;
    D = D << 8;
    return (D) | (reg2 & 0xFF);
    }
    
};
};

int main() {
    CPU::registers zelgoran;
    CPU::registers::flag_register greg;
    greg.zero_flag = 1;
    greg.subtraction_flag = 1;
    greg.half_carry_flag = 1;
    greg.carry_flag = 1;
    printf("%d\n", greg.flag_to_int8());
}