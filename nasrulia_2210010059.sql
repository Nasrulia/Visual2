-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Jun 30, 2024 at 09:02 PM
-- Server version: 8.0.30
-- PHP Version: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `nasrulia_2210010059`
--

-- --------------------------------------------------------

--
-- Table structure for table `tbl_brng`
--

CREATE TABLE `tbl_brng` (
  `id_brng` varchar(11) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `nm_brng` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci,
  `satuan` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci,
  `harga` int DEFAULT NULL,
  `keterangan` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci,
  `berat` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci,
  `dilihat` int DEFAULT NULL,
  `dibeli` int DEFAULT NULL,
  `kata_kunci` varchar(5) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `stock` int DEFAULT NULL,
  `idsubkat` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tbl_brng`
--

INSERT INTO `tbl_brng` (`id_brng`, `nm_brng`, `satuan`, `harga`, `keterangan`, `berat`, `dilihat`, `dibeli`, `kata_kunci`, `stock`, `idsubkat`) VALUES
('22100', 'Laptop', '1', 5000000, 'Lunas', '23', 2, 1, 'Lapt', 120, '33100');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_invd`
--

CREATE TABLE `tbl_invd` (
  `iddetail` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `nm_brng` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `satuan` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `harga` int NOT NULL,
  `qty` int NOT NULL,
  `jumlah` int NOT NULL,
  `berat` int NOT NULL,
  `jmlh_brt` int NOT NULL,
  `idinvoice` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `id_brng` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tbl_invd`
--

INSERT INTO `tbl_invd` (`iddetail`, `nm_brng`, `satuan`, `harga`, `qty`, `jumlah`, `berat`, `jmlh_brt`, `idinvoice`, `id_brng`) VALUES
('44400', 'Sepeda', '1', 120000, 1, 2, 21, 43, '55500', '22200');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_invoice`
--

CREATE TABLE `tbl_invoice` (
  `idinvoice` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `tanggal` date NOT NULL,
  `jumlah` int NOT NULL,
  `ongkir` int NOT NULL,
  `total` int NOT NULL,
  `statinv` int NOT NULL,
  `alamat` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `kota` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `kodepos` int NOT NULL,
  `telepon` int NOT NULL,
  `tarif` int NOT NULL,
  `jmlberat` int NOT NULL,
  `namapenerima` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `idplg` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tbl_invoice`
--

INSERT INTO `tbl_invoice` (`idinvoice`, `tanggal`, `jumlah`, `ongkir`, `total`, `statinv`, `alamat`, `kota`, `kodepos`, `telepon`, `tarif`, `jmlberat`, `namapenerima`, `idplg`) VALUES
('1001', '2024-03-20', 2, 50000, 150000, 3, 'Sungai Andai', 'Banjarmasin', 772201, 876456678, 89000, 56, 'Nasrulia', '22001');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_kategori`
--

CREATE TABLE `tbl_kategori` (
  `idkat` int NOT NULL,
  `nama_kategori` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `tbl_kategori`
--

INSERT INTO `tbl_kategori` (`idkat`, `nama_kategori`) VALUES
(33001, 'Elektronik');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_kota`
--

CREATE TABLE `tbl_kota` (
  `idkota` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `namakota` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `ongkir` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tbl_kota`
--

INSERT INTO `tbl_kota` (`idkota`, `namakota`, `ongkir`) VALUES
('44001', 'Banjarbaru', 870000);

-- --------------------------------------------------------

--
-- Table structure for table `tbl_pelanggan`
--

CREATE TABLE `tbl_pelanggan` (
  `idplg` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `email` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `password` varchar(25) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nama_plg` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci,
  `alamat_plg` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci,
  `kodepos_plg` int DEFAULT NULL,
  `telp_plg` int DEFAULT NULL,
  `tgl_dftr` date DEFAULT NULL,
  `tgl_login` date DEFAULT NULL,
  `tanya` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `jawab` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `id_kota` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `kota_plg` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tbl_pelanggan`
--

INSERT INTO `tbl_pelanggan` (`idplg`, `email`, `password`, `nama_plg`, `alamat_plg`, `kodepos_plg`, `telp_plg`, `tgl_dftr`, `tgl_login`, `tanya`, `jawab`, `id_kota`, `kota_plg`) VALUES
('55001', 'nasrulia@gmail.com', 'lia12345', 'Lia', 'Guntung Paikat', 77021, 89876564, '2024-02-03', '2024-05-05', 'Apakah Stok masih ada', 'iya masih ada kak', '66001', '77003');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_sub_kategori`
--

CREATE TABLE `tbl_sub_kategori` (
  `idsubkat` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `namasubkat` text CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `idkat` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `tbl_sub_kategori`
--

INSERT INTO `tbl_sub_kategori` (`idsubkat`, `namasubkat`, `idkat`) VALUES
('88990', 'Pakaian', '99000');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tbl_brng`
--
ALTER TABLE `tbl_brng`
  ADD PRIMARY KEY (`id_brng`);

--
-- Indexes for table `tbl_invd`
--
ALTER TABLE `tbl_invd`
  ADD PRIMARY KEY (`iddetail`);

--
-- Indexes for table `tbl_kategori`
--
ALTER TABLE `tbl_kategori`
  ADD PRIMARY KEY (`idkat`);

--
-- Indexes for table `tbl_pelanggan`
--
ALTER TABLE `tbl_pelanggan`
  ADD PRIMARY KEY (`idplg`);

--
-- Indexes for table `tbl_sub_kategori`
--
ALTER TABLE `tbl_sub_kategori`
  ADD PRIMARY KEY (`idsubkat`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `tbl_kategori`
--
ALTER TABLE `tbl_kategori`
  MODIFY `idkat` int NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=776768;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
