#define CRT_SECURE_NO_WARNINGS  // Disable secure warnings for Visual Studio
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 20  // Maximum number of employees that can be added

// Define a structure to store employee information
struct Employee {
    char name[50];
    int id;
    char department[50];
    float salary;
};

// Global variables
int num_employees = 0;  // Keeps track of the current number of employees
struct Employee employees[MAX_EMPLOYEES];  // Array to store employee records

// Function prototypes
void addEmployee(struct Employee* employees, int* num_employees);
void displayEmployees(struct Employee* employees, int* num_employees);
void searchEmployeeByID(struct Employee* employees, int* num_employees);
void calculateAverageSalary(struct Employee* employees, int* num_employees);

int main(void) {
    int menu_selection = -1;  // Initialize menu selection to enter loop

    // Main program loop that displays the menu and processes user choices
    while (menu_selection != 0) {
        // Display menu options
        printf("\n\nMenu:"
            "\n\n1. Add a New Employee"
            "\n2. Display All Employees"
            "\n3. Search Employee by ID"
            "\n4. Calculate Average Salary By Department"
            "\n0. Exit"
            "\n\nEnter Your Choice: ");
        
        // Read user choice
        scanf("%d", &menu_selection);

        // Call appropriate function based on user selection
        if (menu_selection == 1) {
            addEmployee(employees, &num_employees);
        } else if (menu_selection == 2) {
            displayEmployees(employees, &num_employees);
        } else if (menu_selection == 3) {
            searchEmployeeByID(employees, &num_employees);
        } else if (menu_selection == 4) {
            calculateAverageSalary(employees, &num_employees);
        }
    }

    // Exit message
    printf("Exiting Program...");
    return 0;
}

// Function to add a new employee to the array
void addEmployee(struct Employee* employees, int* num_employees) {
    // Check if max employee limit is reached
    if (*num_employees >= MAX_EMPLOYEES) {
        printf("\nCannot add more employees. Maximum limit reached.\n");
        return;
    }

    // Prompt and read employee name
    printf("\nEnter Name: ");
    getchar();  // Clear newline character from input buffer
    fgets(employees[*num_employees].name, sizeof(employees[*num_employees].name), stdin);
    employees[*num_employees].name[strcspn(employees[*num_employees].name, "\n")] = '\0';  // Remove newline

    // Prompt and read employee ID
    printf("\nEnter ID: ");
    scanf("%d", &employees[*num_employees].id);

    // Prompt and read department name
    printf("\nEnter Department: ");
    scanf("%49s", employees[*num_employees].department);

    // Prompt and read salary
    printf("\nEnter Salary: ");
    scanf("%f", &employees[*num_employees].salary);

    // Confirmation message
    printf("\nEmployee Added Successfully.");
    
    // Increment the number of employees
    (*num_employees)++;
}

// Function to display all employees in the array
void displayEmployees(struct Employee* employees, int* num_employees) {
    // Loop through each employee and display their details
    for (int i = 0; i < *num_employees; i++) {
        printf("\n\nEmployee name: %s", employees[i].name);
        printf("\nEmployee ID: %d", employees[i].id);
        printf("\nEmployee Department: %s", employees[i].department);
        printf("\nEmployee Salary: %.2f", employees[i].salary);
    }
}

// Function to search for an employee by ID and display their information
void searchEmployeeByID(struct Employee* employees, int* num_employees) {
    int search_id;
    int found = 0;  // Flag to indicate if employee was found

    // Prompt user to enter the employee ID to search
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &search_id);

    // Loop through employees to find matching ID
    for (int i = 0; i < *num_employees; i++) {
        if (search_id == employees[i].id) {
            // If found, display employee details
            printf("\n\nEmployee name: %s", employees[i].name);
            printf("\nEmployee ID: %d", employees[i].id);
            printf("\nEmployee Department: %s", employees[i].department);
            printf("\nEmployee Salary: %.2f", employees[i].salary);
            found = 1;  // Set flag to indicate employee was found
            break;  // Exit loop after finding the employee
        }
    }

    // If employee with ID not found, print message
    if (!found) {
        printf("\nEmployee with ID %d not found.\n", search_id);
    }
}

// Function to calculate and display average salary for a specified department
void calculateAverageSalary(struct Employee* employees, int* num_employees) {
    char search_department[50];
    int department_count = 0;  // Count of employees in the specified department
    float sum_salary = 0;      // Total salary of employees in the specified department

    // Prompt user to enter department name
    printf("\n\nEnter Department Name to Calculate Average Salary: ");
    scanf("%49s", search_department);

    // Loop through employees to sum salaries in the specified department
    for (int i = 0; i < *num_employees; i++) {
        if (strcasecmp(employees[i].department, search_department) == 0) {
            sum_salary += employees[i].salary;
            department_count++;
        }
    }

    // Calculate and display average if employees found, otherwise display no employees found
    if (department_count > 0) {
        float avg_salary = sum_salary / department_count;
        printf("\nAverage Salary for Department %s: %.2f\n", search_department, avg_salary);
    } else {
        printf("\nNo employees found in the '%s' department.\n", search_department);
    }
}
