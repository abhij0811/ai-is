#is-4
#Run in jupyter
#first install below package, after installing restart jupyter then run code 
#pip install Crypto.Cipher

from Crypto.Cipher import AES

key=b'C&F)H@McQfTjWnZt'
cipher=AES.new(key,AES.MODE_EAX)
data="Welcome to copyassignment.com!".encode()
nonce=cipher.nonce
ciphertext=cipher.encrypt(data)
print("Cipher text:",ciphertext)


cipher=AES.new(key,AES.MODE_EAX,nonce=nonce)
plaintext=cipher.decrypt(ciphertext)
print("Planin text:",plaintext)