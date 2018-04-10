<!DOCTYPE html>
<html>
	<head>
		<title>Manga Reader</title>
		<link rel="stylesheet" type="text/css" href="../../../sources/css/main.css">
		<link rel="stylesheet" type="text/css" href="../../../sources/css/mangaReader.css">
		<link rel="stylesheet" type="text/css" href="../../../sources/css/navBar.css">
		<script type="text/javascript">

			
			/*

			javascript function to change the image of the comic through the drop down options
		
			Basically the image change is based off the element value of the select option that is generated for every page in the chapters directory.
		
			*/

			function displayImage(elem) {

				var image = document.getElementById("mPage");
				image.src = elem.value;


			}

			function magnify() {


			}
	
			//Allows for an arrow click to change the comic page
			window.addEventListener("keydown", function e (event) {

				switch (event.key) {

					//Right Arrow					
					case "ArrowRight":

					//changes the drop down boxes index by +1

						document.getElementById("pageOption").selectedIndex +=1;
						var image = document.getElementById("mPage");
						image.src = pageOption.value;
					break;

					//Left Arrow
					case "ArrowLeft":
						//Changes the drop down boxes index by -1
						document.getElementById("pageOption").selectedIndex -=1;
					
						//multiple declarations of var image was neccessary as it stores the current image only, otherwise the browser console would come back with the error "image is null".
						var image = document.getElementById("mPage");
						image.src= pageOption.value;
						break;
				}

			}
			,true)

		</script>
	</head>

	<body>
	
		<header>
		
			<nav>
					<a href="../../../index.html">Home</a>

					<a href="../../index.php">Comics</a>

					<a href="../../../videos/index.php">Videos</a>

			</nav>

		</header>

		<div id="comicDropdown"> 
	
		<center>
		
			<select id= "comicOption" onchange="location = this.value;" > <!--this piece of javascript basically just changes the page or in other words, the "location" based on the drop down option. -->
	
			<option value="" selected="">Comic</option>
	
			<?php

			/*
				This php script very simply fills the drop down with all the options in the selected directory.

				Basically what the php script does is, for each file in the directory (The variable, $filename is blank, it just acts as a sort of container to be filled with the actual file names) then it prints the inputted html with the filename that the php script filled into the container variable.

				basename($filename) acts as a way to strip any prefix or extra data from the $filename's. 

			*/
    			foreach(glob($_SERVER['DOCUMENT_ROOT'] . '/comics/*' , GLOB_ONLYDIR) as $filename){
    			$filename = basename($filename);
    			echo "<option value='" . 'https://' . $_SERVER['SERVER_NAME'] . '/comics/' . $filename . "'>".$filename."</option> \n";
    			}
			?>
 
		</select>

		<select id = "volumeOption" onchange= "location = this.options[this.selectedIndex].value;">
		
			<option value = "" selected="">Volume/Chapter</option>

			<?php

				$chapter = basename(__DIR__);
				$chapterTrim = rtrim(__DIR__, $chapter);

				$webAddress = 'https://' . $_SERVER['SERVER_NAME'] . $_SERVER['REQUEST_URI'];
				$chapterAddress = substr($webAddress, 0, -23);

				foreach(glob( $chapterTrim . '/*') as $filename){
    				$filename = basename($filename);
        			echo "<option value='" . $chapterAddress . $filename . "'>".$filename. "</option> \n";

    					}

			?>	


		</select>

		<select id= "pageOption" onchange="displayImage(this);" >
	
			<option value="" selected="">Pages</option>
	
			<?php 
       			foreach(glob(__DIR__ . '/*' . '.{jpg,png}', GLOB_BRACE) as $filename){
    				$filename = basename($filename);
        			echo "<option value='" . $webAddress . $filename . "'>".$filename. "</option> \n";
    					}
			?>

		</select>

		</center>

		</div>

		<div id="mWrapper">

			<center>

				<img id= "mPage" src='https://www.erebus.systems/landing/comics/All_Rounder_Meguru/All-Rounder_Meguru_V01/All-Rounder_Meguru_V01_000a.jpg' onclick="magnify()" >


		<p>You can also use the left and right arrow keys to go back and forth between pages</p>
			</center>

	 	</div>
	
	</body>
</html>