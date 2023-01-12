/* Write your PL/SQL query statement below */

select Person.firstName,Person.lastName,Address.city,Address.state from Person Left Join Address on Person.personId=Address.personId;
