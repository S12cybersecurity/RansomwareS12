# RansomwareS12
Simple Ransoware to attack Windows 🌟 

This is the first and most simple version of this malware, in the next's versions you can see:

- Strong File Encryption with AES or RC4
- Persistence
- Server C2 to generate keys 
- Server C2 to steal data

# Usage

Let's execute and try it, first of all the malware encrypt all the files in ALL users files in users directories, and then encrypting it:

And i create a file in Public User directory with this content:

![image](https://user-images.githubusercontent.com/79543461/233203969-5fa34e09-a2d3-470d-ac0b-b938771a0153.png)


And now i execute the ransomware:

![image](https://user-images.githubusercontent.com/79543461/233203990-0f3739ce-7690-4807-981c-29778e5bba2e.png)

It's encrypting files, this step can take a long time, depends the number of users and files in users directories.
When all the files are encrypted and user press one key the program show this message:

![image](https://user-images.githubusercontent.com/79543461/233204020-69fcd328-58ce-41af-9823-fbb8437d0ac8.png)


The previous file:

![image](https://user-images.githubusercontent.com/79543461/233204053-70918b9a-58a0-40ea-a94e-9c9849bce2f3.png)

Now the user pays and receive they key, when the user put it in the cmd prompt and it's incorrect he see this:

![image](https://user-images.githubusercontent.com/79543461/233204138-ab0b40e8-eb3d-4d9a-aa96-0115ca3a7635.png)

But when is correct… All the files are decrypted



