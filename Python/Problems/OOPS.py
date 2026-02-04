class Bank:
    def __init__(self, account_no, name, balance):
        self.account_no = account_no
        self.name = name
        self.balance = balance

    def deposit(self,amount):
        self.balance = self.balance + amount
        print(f"Amount of {amount} has been deposited !!!")

    def withdraw(self,amount):
        self.balance = self.balance - amount
        print(f"Amount of {amount} has been withdrawn !!!")

    def display(self):
        print(self.account_no, self.name, self.balance)

c1 = Bank(1,"Harsh", 100000)
c2 = Bank(2, "Pankaj", 5000)

c1.display()
c1.deposit(50000)
c1.display()
c1.withdraw(25000)
c1.display()