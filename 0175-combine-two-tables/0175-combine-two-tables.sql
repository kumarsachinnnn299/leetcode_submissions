/* Write your PL/SQL query statement below */

select firstName,lastName,city,state from Person Left Join Address on Person.personId=Address.personId;
