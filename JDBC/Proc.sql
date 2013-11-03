DELIMITER $$

DROP PROCEDURE IF EXISTS `firstdb`.`getEmpName` $$
CREATE PROCEDURE `firstdb`.`getEmpName`
   (IN Employee_ID INT, OUT EMP_FIRST VARCHAR(50))
BEGIN
   SELECT fname INTO EMP_FIRST
   FROM Employee_rec
   WHERE ID = Employee_ID;
END $$

DELIMITER ;