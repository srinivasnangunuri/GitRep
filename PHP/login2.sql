-- phpMyAdmin SQL Dump
-- version 4.0.4
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jan 18, 2014 at 05:50 PM
-- Server version: 5.6.12-log
-- PHP Version: 5.4.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `login`
--
CREATE DATABASE IF NOT EXISTS `login` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `login`;

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE IF NOT EXISTS `admin` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(30) DEFAULT NULL,
  `passcode` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`id`, `username`, `passcode`) VALUES
(1, 'test', 'test');

-- --------------------------------------------------------

--
-- Table structure for table `book_details`
--

CREATE TABLE IF NOT EXISTS `book_details` (
  `bookId` int(11) NOT NULL AUTO_INCREMENT,
  `bookName` varchar(100) NOT NULL,
  `Availability` tinyint(1) NOT NULL,
  PRIMARY KEY (`bookId`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=7 ;

--
-- Dumping data for table `book_details`
--

INSERT INTO `book_details` (`bookId`, `bookName`, `Availability`) VALUES
(1, 'Computer Architecture', 0),
(2, 'Operating Systems', 1),
(3, 'Algorithms and Data Structures', 1),
(4, 'History of Google', 0),
(5, 'Computer Networks', 0),
(6, 'Real Time Systems', 1);

-- --------------------------------------------------------

--
-- Table structure for table `book_user_details`
--

CREATE TABLE IF NOT EXISTS `book_user_details` (
  `bookId` int(11) NOT NULL,
  `UserId` int(11) NOT NULL,
  KEY `bookId` (`bookId`),
  KEY `bookId_2` (`bookId`),
  KEY `UserId` (`UserId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `book_user_details`
--

INSERT INTO `book_user_details` (`bookId`, `UserId`) VALUES
(5, 2),
(4, 2);

-- --------------------------------------------------------

--
-- Table structure for table `user_details`
--

CREATE TABLE IF NOT EXISTS `user_details` (
  `userId` int(11) NOT NULL AUTO_INCREMENT COMMENT 'User Id for each user',
  `userName` varchar(25) NOT NULL COMMENT 'user name for each user',
  `password` varchar(25) NOT NULL COMMENT 'password of each user',
  PRIMARY KEY (`userId`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

--
-- Dumping data for table `user_details`
--

INSERT INTO `user_details` (`userId`, `userName`, `password`) VALUES
(1, 'larry', 'abc123'),
(2, 'admin', 'admin');

--
-- Constraints for dumped tables
--

--
-- Constraints for table `book_user_details`
--
ALTER TABLE `book_user_details`
  ADD CONSTRAINT `book_user_details_ibfk_2` FOREIGN KEY (`UserId`) REFERENCES `user_details` (`userId`),
  ADD CONSTRAINT `book_user_details_ibfk_1` FOREIGN KEY (`bookId`) REFERENCES `book_details` (`bookId`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
