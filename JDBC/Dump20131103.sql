CREATE DATABASE  IF NOT EXISTS `firstdb` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `firstdb`;
-- MySQL dump 10.13  Distrib 5.6.13, for Win32 (x86)
--
-- Host: 127.0.0.1    Database: firstdb
-- ------------------------------------------------------
-- Server version	5.6.14

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `dept`
--

DROP TABLE IF EXISTS `dept`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `dept` (
  `dept_id` int(10) NOT NULL,
  `dept_name` varchar(50) NOT NULL,
  `dept_cat` varchar(2) NOT NULL,
  `dept_owner` int(5) DEFAULT NULL,
  PRIMARY KEY (`dept_id`),
  UNIQUE KEY `dept_name` (`dept_name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `dept`
--

LOCK TABLES `dept` WRITE;
/*!40000 ALTER TABLE `dept` DISABLE KEYS */;
INSERT INTO `dept` VALUES (1,'New Dept','A',1300),(2,'IT','B',1302),(3,'Marketing','B',1301),(4,'HR','C',1302);
/*!40000 ALTER TABLE `dept` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `employee_partial_view`
--

DROP TABLE IF EXISTS `employee_partial_view`;
/*!50001 DROP VIEW IF EXISTS `employee_partial_view`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `employee_partial_view` (
  `EMPLOYEE_ID` tinyint NOT NULL,
  `FNAME` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `employee_rec`
--

DROP TABLE IF EXISTS `employee_rec`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `employee_rec` (
  `Employee_ID` int(10) NOT NULL,
  `fname` varchar(50) NOT NULL,
  `Last_Name` varchar(45) NOT NULL,
  `Title` varchar(30) NOT NULL,
  `stamp` timestamp NULL DEFAULT NULL,
  `age` int(5) DEFAULT NULL,
  PRIMARY KEY (`Employee_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employee_rec`
--

LOCK TABLES `employee_rec` WRITE;
/*!40000 ALTER TABLE `employee_rec` DISABLE KEYS */;
INSERT INTO `employee_rec` VALUES (1300,'John','Cam','Senior Designer',NULL,26),(1301,'Sam','Jose','DBA','2013-10-26 17:05:00',25),(1302,'Sierra','Paul','SE','2013-10-26 17:05:00',28),(1303,'Ron','Tabo','DBA','2013-10-26 20:16:00',29);
/*!40000 ALTER TABLE `employee_rec` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `employee_view`
--

DROP TABLE IF EXISTS `employee_view`;
/*!50001 DROP VIEW IF EXISTS `employee_view`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `employee_view` (
  `Employee_ID` tinyint NOT NULL,
  `fname` tinyint NOT NULL,
  `Last_Name` tinyint NOT NULL,
  `Title` tinyint NOT NULL,
  `stamp` tinyint NOT NULL,
  `age` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `orphan_emp_view`
--

DROP TABLE IF EXISTS `orphan_emp_view`;
/*!50001 DROP VIEW IF EXISTS `orphan_emp_view`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `orphan_emp_view` (
  `EMPLOYEE_ID` tinyint NOT NULL,
  `FNAME` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Dumping events for database 'firstdb'
--

--
-- Dumping routines for database 'firstdb'
--
/*!50003 DROP FUNCTION IF EXISTS `GET_DEPT_NAME` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` FUNCTION `GET_DEPT_NAME`(EMP_ID INT) RETURNS varchar(25) CHARSET utf8
BEGIN
DECLARE DEPTNAME VARCHAR(25) DEFAULT '';
SELECT DEPT_NAME INTO DEPTNAME FROM DEPT D WHERE D.DEPT_OWNER = EMP_ID;
RETURN DEPTNAME;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `FIRST_PROCEDURE` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `FIRST_PROCEDURE`()
BEGIN
DECLARE VAR_EMP_ID INT(5);
SET VAR_EMP_ID:= 1301;
SELECT EMPLOYEE_ID,FNAME FROM EMPLOYEE_REC WHERE EMPLOYEE_ID =  VAR_EMP_ID;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Final view structure for view `employee_partial_view`
--

/*!50001 DROP TABLE IF EXISTS `employee_partial_view`*/;
/*!50001 DROP VIEW IF EXISTS `employee_partial_view`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `employee_partial_view` AS select `employee_rec`.`Employee_ID` AS `EMPLOYEE_ID`,`employee_rec`.`fname` AS `FNAME` from `employee_rec` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `employee_view`
--

/*!50001 DROP TABLE IF EXISTS `employee_view`*/;
/*!50001 DROP VIEW IF EXISTS `employee_view`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `employee_view` AS select `employee_rec`.`Employee_ID` AS `Employee_ID`,`employee_rec`.`fname` AS `fname`,`employee_rec`.`Last_Name` AS `Last_Name`,`employee_rec`.`Title` AS `Title`,`employee_rec`.`stamp` AS `stamp`,`employee_rec`.`age` AS `age` from `employee_rec` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `orphan_emp_view`
--

/*!50001 DROP TABLE IF EXISTS `orphan_emp_view`*/;
/*!50001 DROP VIEW IF EXISTS `orphan_emp_view`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `orphan_emp_view` AS select `e`.`Employee_ID` AS `EMPLOYEE_ID`,`e`.`fname` AS `FNAME` from `employee_rec` `e` where ((not(`e`.`Employee_ID` in (select `d`.`dept_owner` from `dept` `d`))) and (`e`.`age` > 25)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2013-11-03  1:16:36
