# CIS7-Project-1-Basic-CPU-Documentation
- Case Project 3
- Team name: Basic CPU
- Jonathan Carreon
- Guadalupe Chavez

**************************************
# Description
// This program is supposed to encrypt and decrypt a message from the user with Vigenere cipher.

**************************************
# Table of Contents
- Programming Approaches
- Algorithm Integrated
- Limitations of Program
- Application of Course Concepts

**************************************

- Programming Approaches

// When starting on the programming(Encryption) for case-project 3, I evaluated other types of
   ciphers such as Caesar and Linear Shift on encryption for comparisons. During my evaluation,
   I found out that the Caesar cipher is similar to the Vigenere cipher in a way that it involves
   its 26 possible ciphers.

- Algorithm Integrated

// The program implements the Vigenere cipher to encrypt and decrypt the user's input of plain text.
   For the program to encrypt and decrypt the plain text, it requires a key that will repeat itself
   at the length of the plain text. With this key (key word), it allows the program to go from
   encryption to decryption. The encryption of the plain text/original text is from using the Vigenere 
   table.
   
 - Limitations of Program
 
// 

- Application of Course Concepts

// 'vector.pushback' is implemented into each function so that it can append the given element value to
   the end of the container.

// There are formulas in each function so that there is a conversion to numbers from 0 - 25 and conversion
   to alphabets.
   
// The cipher's modular arithmatic for encryption is: Ei = (Pi + Ki) mod 26,  P = Plain text, K = Key

// The cipher's modular arithmatic for decryption is: Di = (Ei - Ki + 26) mod 26
