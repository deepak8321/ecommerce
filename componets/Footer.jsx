import React from 'react';
import Link from 'next/link';
import { AiFillInstagram, AiOutlineTwitter } from 'react-icons/ai'

const Footer = () => {

return (
    <div className="footer-container">
      <p className="logo">2022 JBL Headphone All right reserved</p>
      <p className='icons'>
        <AiFillInstagram />
        <AiOutlineTwitter />
      </p>

    </div>
  )
}

export default Footer