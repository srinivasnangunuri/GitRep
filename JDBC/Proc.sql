DELIMITER $$

DROP PROCEDURE IF EXISTS `firstdb`.`getEmpName` $$
CREATE PROCEDURE `firstdb`.`getEmpName`
   (IN ID INT, OUT EMP_FIRST VARCHAR(50))
BEGIN
   SELECT fname INTO EMP_FIRST
   FROM Employee_rec
   WHERE employee_ID = ID;
END $$

DELIMITER ;