# **Bank Management System**

[![Language](https://img.shields.io/badge/Language-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language))  
[![Status](https://img.shields.io/badge/Status-Completed-brightgreen)]()  
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)  

The **Bank Management System** is a console-based application developed in **C language**. This project demonstrates essential banking functionalities, showcasing my skills in programming, logic building, and modular development. It is designed to help manage customer accounts efficiently with features like account creation, transactions, updates, and more.

---

## **Table of Contents**

1. [About the Project](#about-the-project)  
2. [Features](#features)  
3. [File Structure](#file-structure)  
4. [Technologies Used](#technologies-used)  
5. [Getting Started](#getting-started)  
6. [Challenges and Learnings](#challenges-and-learnings)  
7. [Future Improvements](#future-improvements)  
8. [About the Developer](#about-the-developer)  
9. [License](#license)  

---

## **About the Project**

This project simulates a simple banking system to perform core operations such as:  
- Adding new accounts.  
- Viewing account details.  
- Performing deposits, withdrawals, and balance inquiries.  
- Updating account information.  
- Deleting accounts when needed.  

The program is structured using **modular programming principles** for better readability and scalability.  

---

## **Features**

### **Completed Features**
- **Account Creation**: Add new customer details with validation for proper input.  
- **View Details**: Display account information for a specific customer.  
- **Transactions**: Perform deposits, withdrawals, and balance checks securely.  
- **Update Information**: Modify customer details such as name or contact info.  
- **Account Deletion**: Remove accounts that are no longer needed.  

### **Future Features**
- Implement a graphical user interface (GUI) for better usability.  
- Add security features like user authentication.  
- Enable data persistence using file storage or databases.  

---

## **File Structure**

Here's an overview of the main files in the repository:  

| File Name       | Description |  
|------------------|-------------|  
| `main.c`         | Entry point for the application. Handles the program menu. |  
| `menu.c`         | Contains the menu logic and options for user interaction. |  
| `new.c`          | Handles new account creation. |  
| `see.c`          | Displays account details. |  
| `transact.c`     | Manages deposits and withdrawals. |  
| `update.c`       | Allows updating customer details. |  
| `erase.c`        | Deletes accounts from the system. |  
| `system.h`       | Header file with function prototypes. |  

---

## **Technologies Used**

- **C Language**: Core programming language used to build the application.  
- **GCC Compiler**: To compile and execute the program.  
- **Modular Programming**: For better code organization and maintainability.  

---

## **Getting Started**

### **Prerequisites**
Ensure you have the following installed on your system:  
- GCC Compiler  
- A text editor or IDE (e.g., VS Code, Code::Blocks)  

### **Setup Instructions**
1. Clone the repository:  
   ```bash
   git clone https://github.com/melekmoalla/Bank-Management-System-Project-Using-C-Language.git
   cd Bank-Management-System-Project-Using-C-Language
