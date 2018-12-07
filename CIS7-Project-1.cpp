// Jonathan Carreon (Encryption)
// Guadalupe Chavez (Decryption)
// CIS7
// Project: Case Project 3 
// Team Name: Basic CPU
#include <iostream>
using namespace std;

// This function is used to generate the key in a cycle way
// until its length is not equal to the plain text. (Jonathan)
string generateKey(string text, string key)
{
  int v = text.size();

  for (int i = 0; ; i++)
  {
    if (v == i)
      i = 0;
    if (key.size() == text.size())
      break;
    key.push_back(key[i]);
  }
  return key; 
}

// This function is used to return the generated encrypted
// plain text with the help of the key. (Jonathan)
string cipherText(string text, string key)
{
  string cipher_text;

  for (int i = 0; i < text.size(); i++)
  {
    int v = (text[i] + key[i]) %26;

    v += 'A';

    cipher_text.push_back(v);
  }
  return cipher_text;
}

// This function will decrypt the encrypted text and return 
// the plain text. (Guadalupe)
string decryptedText(string cipher_text, string key)
{
  string decrypt_text;

  for (int i = 0; i < cipher_text.size(); i++)
  {
    int v = (cipher_text[i] - key[i] + 26) %26;

    v += 'A';

    decrypt_text.push_back(v);
  }
  return decrypt_text;
}

// Use 'WEWILLTRY' as Plaintext
// Use 'WOW' as keyword
// Ciphertext should output with SSSEZHPFU
// (Jonathan and Guadalupe)
int main()
{
  string text, keyWord;

  cout << "Insert Plaintext: ";
  cin >> text;

  cout << "Insert Keyword: ";
  cin >> keyWord;

  string key = generateKey(text, keyWord);
  string cipher_text = cipherText(text, key);

  cout << "Ciphertext: " << cipher_text << "\n";
  
  cout << "Decrypted Text: " << decryptedText(cipher_text, key);

  return 0;
}
